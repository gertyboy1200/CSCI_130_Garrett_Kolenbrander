function [theta, r] = car_to_polar(x, y)
TODEGREES = 180.0/3.141593;
r = sqrt( (x*x) + (y*y) );
theta = atan(y/x) * TODEGREES;
end