im = imread('home_alone.jpg');
red = im(:, :, 1);
green = im(:, :, 2);
blue = im(:, :, 3);

figure(1)
subplot(2,2,1)
imshow(im)
title('Original Image')
sgtitle({"Keep the change you filthy animal -- Kevin's TV"}, ...
    'Color', 'red', 'fontsize', 12)

deleteColor = blue * 0;
im_noBlue = im;
im_noBlue(:, :, 3) = deleteColor;

figure(1)
subplot(2, 2, 2)
imshow(im_noBlue)
title('Delete Blue')

ThresholdRed = 100;
ThresholdGreen = 75;

im_GR = im_noBlue;
im_GR(:, :, 1) = (red > ThresholdRed) * 255;
im_GR(:, :, 2) = (green > ThresholdGreen) * 255;

figure(1)
subplot(2, 2, 3)
imshow(im_GR)
title('Max out Red and Green.')

for m = 1:length(im_GR(:,1,1))
    for n = 1:length(im_GR(1,:,1))
        if im_GR(m,n,1) > 0 && im_GR(m,n,2) > 0
            im_GR(m,n,3) = 255;
        end
    end
end

figure(1)
subplot(2,2,4)
imshow(im_GR)
title('Red and Green filter')

figure(2)
subplot(1,3,1)
h = histogram(blue, 'FaceColor', 'b', 'EdgeColor', 'b');
title('Blue in original image')

figure(2)
subplot(1,3,2)
i = histogram(green, 'FaceColor', 'g', 'EdgeColor', 'g');
title('Green in original image')

figure(2)
subplot(1,3,3)
j = histogram(red, 'FaceColor', 'R', 'EdgeColor', 'r');
title('Red in original image')

im_after = im_GR;
red = im_after(:, :, 1);
green = im_after(:, :, 2);
blue = im_after(:, :, 3);

figure(3)
subplot(1,3,1)
a = histogram(blue, 'FaceColor', 'b', 'EdgeColor', 'b');
title('Blue in image after filter')

figure(3)
subplot(1,3,2)
b = histogram(green, 'FaceColor', 'g', 'EdgeColor', 'g');
title('Green in image after filter')

figure(3)
subplot(1,3,3)
c = histogram(red, 'FaceColor', 'r', 'EdgeColor', 'r ');
title('Red in image after filter')

saveas(figure(1), 'filter.jpg')
saveas(figure(2), 'histograms_before.jpg')
saveas(figure(3), 'histograms_after.jpg')