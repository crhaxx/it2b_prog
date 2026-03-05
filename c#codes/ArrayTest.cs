class Program
{
    static void Main()
    {
        int[] ints = new int[10];

        for (int i = 0; i < ints.Length; i++)
        {
            Console.Write("Enter num: ");
            ints[i] = int.Parse(Console.ReadLine());
        }


        Array.Sort(ints);
        Console.WriteLine("--------");
        Console.WriteLine($"Maximum: {ints.Max()}");
        Console.WriteLine($"Min Max dif: {ints.Max() - ints.Min()}");
        Console.WriteLine($"3 smallest: {ints[0]}, {ints[1]}, {ints[2]}");
        Console.WriteLine($"Median: {(ints[5] + ints[6]) / 2}");
    }
}