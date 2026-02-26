class Calc
{
    static void Main()
    {
        Console.Write("Cislo: ");
        int cislo = int.Parse(Console.ReadLine());

        Console.Write("Druhe Cislo: ");
        int cislo2 = int.Parse(Console.ReadLine());

        Console.Write("Operace: ");
        char operace = char.Parse(Console.ReadLine());

        int vysledek = 0;

        switch (operace)
        {
            case '*':
                vysledek = cislo * cislo2;
                break;

            case '/':
                vysledek = cislo / cislo2;
                break;

            case '+':
                vysledek = cislo + cislo2;
                break;

            case '-':
                vysledek = cislo - cislo2;
                break;
        }

        Console.WriteLine($"{vysledek}");
    }
}