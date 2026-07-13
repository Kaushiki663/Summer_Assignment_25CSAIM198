//Question: Write a program to create number guessing game.

int main() {
    int number, guess, attempts = 0;
    int max_attempts = 7;

    // Seed the random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("You have %d attempts to guess the number.\n", max_attempts);

    while (attempts < max_attempts) {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (guess < number) {
            printf("Too low! Try a higher number.\n");
        } else {
            printf("Too high! Try a lower number.\n");
        }
    }

    if (attempts == max_attempts && guess != number) {
        printf("Sorry, you've used all your attempts. The number was %d.\n", number);
    }

    return 0;
}