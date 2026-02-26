
class Program
{
    static void Main()
    {
        Console.Write("Zadej pocet prednasek: ");
        int prednasky = int.Parse(Console.ReadLine());

        Console.Write("Zadej pocet seminářu: ");
        int seminare = int.Parse(Console.ReadLine());

        Console.Write("Zadej hodinovou mzdu: ");
        int mzda = int.Parse(Console.ReadLine());

        mzda *= prednasky * 2 + seminare;

        Console.WriteLine($"Soucet mzdy {mzda}");
    }
}