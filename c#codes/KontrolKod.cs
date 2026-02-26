class Program
{
    static void Main()
    {
        Console.Write("Zadej cislo: ");
        int cislo = int.Parse(Console.ReadLine());

        int[] cisloArr = cislo.ToString().Select(o => Convert.ToInt32(o) - 48).ToArray();

        int vypocet = 0;

        for (int i = 0; i < cisloArr.Length; i++)
        {
            int currentNum = cisloArr[(cisloArr.Length - 1) - i];
            if (((cisloArr.Length - 1) - i) % 2 == 0)
            {
                vypocet -= currentNum;
            }
            else
            {
                vypocet += currentNum;
            }
        }

        Console.WriteLine($"{Math.Abs(vypocet)}");
    }
}