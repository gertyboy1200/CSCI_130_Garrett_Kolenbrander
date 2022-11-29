number = floor(rand * 100);
n_guesses = 0;
guesses_remaning = 5;

while (n_guesses < guesses_remaning)
    guess = input("enter your guess: ");
    if (guess < number)
        disp("your number is to low");
        guesses_remaning = guesses_remaning - 1;
        disp(["you have ", guesses_remaning, " attempts left."]);
    elseif (guess > number)
        disp("your number is to high");
        guesses_remaning = guesses_remaning - 1;
        disp(["you have ", guesses_remaning, " attempts left."]);
    else
        disp("YOU GUESSED THE NUMBER");
        break;
    end
end
