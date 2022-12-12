clear all
close all
clc

load patients

for n = 1:1:length(LastName)
    Patient(n).LastName = LastName{n};
    Patient(n).Gender = Gender{n};
    Patient(n).SelfAssessedHealthStatus = SelfAssessedHealthStatus{n};
    Patient(n).Age = Age(n);
    Patient(n).Smoker = Smoker(n);
    Patient(n).Height = Height(n);
    Patient(n).Weight = Weight(n);
end

count = 0;

for n = 1:1:length(Patient)
    if (Patient(n).Smoker == 1) && (Patient(n).Age < 40)
        count = count + 1;
    end
end

AllBMI = zeros(length(Patient), 1);


for n = 1:1:length(Patient)
    AllBMI(n) = add_BMI(Patient(n));
end
 
histogram(AllBMI)

function [output] = add_BMI(input)

    for n = 1:1:length(input)
        output = ((input(n).Weight * 0.453592) / (power((input(n).Height * 0.0254), 2)));
    end
end
