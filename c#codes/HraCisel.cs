using System.Linq;

class HraCisel
{
    static void Main()
    {
        bool endGame = false;

        int OldNum = 0;
        int[] OldNumArr = null;
        do
        {
            Console.Write("Zadej cislo: ");
            int input = int.Parse(Console.ReadLine());
            int[] inputArr = intToArray(input);
            Array.Sort(inputArr);

            switch (input)
            {
                case 0:
                    endGame = true;
                    break;

                case > 0:
                    if (OldNum == 0)
                    {
                        OldNum = input;
                        OldNumArr = intToArray(OldNum);
                        continue;
                    }
                    else
                    {
                        if (input < OldNum)
                        {
                            Console.WriteLine("New num is smaller than old num");
                            continue;
                        }
                        else if ((OldNum % 2 == 0 && input % 2 == 0) || (OldNum % 2 != 0 && input % 2 != 0))
                        {
                            Console.WriteLine("New num is not odd or even to old num");
                            continue;
                        }
                        else if (!inputArr.Any(x => OldNumArr.Contains(x)))
                        {
                            Console.WriteLine("New num does not have any numbers from old number");
                            continue;
                        }
                    }


                    OldNum = input;
                    OldNumArr = intToArray(OldNum);
                    break;
                default:
                    break;
            }
        } while (!endGame);
    }

    // Source - https://stackoverflow.com/q/4580261
    // Posted by Rosmarine Popcorn, modified by community. See post 'Timeline' for change history
    // Retrieved 2026-02-05, License - CC BY-SA 3.0

    public static int[] intToArray(int num)
    {
        string holder = num.ToString();
        int[] numbers = new int[holder.Length];

        for (int i = 0; i < numbers.Length; i++)
        {
            numbers[i] = holder[i] - '0';
        }

        return numbers;
    }

}