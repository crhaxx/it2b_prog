class Sachovnice
{
    static void Main()
    {
        Console.Write("Znak: ");
        char znak = Console.ReadLine()[0];

        Console.Write("Znak 2: ");
        char znak2 = Console.ReadLine()[0];

        bool oneTwo = false;

        Console.WriteLine("Wait 2 sec please...");

        Thread.Sleep(1000);

        Console.WriteLine("Wait 1 sec please...");

        Thread.Sleep(1000);

        Console.WriteLine("Drawing..");

        Thread.Sleep(3000);

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Console.Write(oneTwo == false ? $"{znak} " : $"{znak2} ");
                oneTwo = !oneTwo;
            }



            Console.WriteLine();


        }
    }
}