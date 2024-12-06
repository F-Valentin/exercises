using System;

namespace MyApp
{
    internal class Program
    {
        private static void DisplayGameIntro()
        {
            Console.WriteLine("Welcome to the higher or lower game");
            Console.WriteLine("The secret number is between 0 and 100");
            Console.WriteLine("Note: After 15 attempts, you lose!");
        }

        private static void PlayGame(int secretNumber, int maxAttempts)
        {
            while (maxAttempts > 0)
            {
                Console.WriteLine($"Remaining attempts: {maxAttempts}");
                Console.Write("Please enter a number: ");
                string? input = Console.ReadLine();

                if (input != null && int.TryParse(input, out int guess))
                {
                    if (guess < secretNumber)
                        Console.WriteLine("It's higher");
                    else if (guess > secretNumber)
                        Console.WriteLine("It's lower");
                    else
                    {
                        Console.WriteLine($"Well done! The number was indeed: {secretNumber}");
                        return;
                    }
                    maxAttempts--;
                }
                else
                {
                    Console.WriteLine("Invalid input, please enter a valid number.");
                }
            }

            Console.WriteLine("You lost.");
        }

        public static void Main()
        {
            const int maxAttempts = 15;
            int secretNumber = new Random().Next(0, 100);

            DisplayGameIntro();
            PlayGame(secretNumber, maxAttempts);
        }
    }
}
