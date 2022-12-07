function [output_value] = Pat5(volume_data)

    for l = 1:(length(volume_data) / 2)
        if (volume_data(l) - 5) < 0
            
        elseif (volume_data(l) - 5) < ((volume_data(l - 1) - 5) * -1)
            [output_value] = volume_data(l);
            break;   
        else
            [output_value]= volume_data(l - 1);
            break;
        end
    end
end