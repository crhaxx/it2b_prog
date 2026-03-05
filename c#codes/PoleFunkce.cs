class Program
{
    static bool jsouKladne(int[] arr)
    {
        foreach (int cislo in arr)
        {
            if (cislo % 2 != 0)
            {
                return false;
            }
        }

        return true;
    }

    static void Main()
    {
        int[] ints = new int[10];

        for (int i = 0; i < 10; i++)
        {
            Console.Write("Zadej cislo: ");
            ints[i] = int.Parse(Console.ReadLine());
        }

        Console.WriteLine($"{jsouKladne(ints)}");
        Console.WriteLine($"{serazene(ints)}");
    }
}