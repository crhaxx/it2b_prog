class KamenNuzkyPapir
{
    static void Main()
    {
        bool playing = true;
        int player1;
        int player2;

        while (playing)
        {
            Console.Clear();
            Console.WriteLine("      Hrac 1     ");
            Console.WriteLine("-----------------\n|  1 - Kamen	|\n|  2 - Nuzky	|\n|  3 - Papir	|\n-----------------");
            Console.WriteLine();
            Console.Write("Zadejte cislo: ");
            player1 = int.Parse(Console.ReadLine());
            if (player1 > 3 || player1 < 1)
            {
                continue;
            }
            Console.Clear();
            Console.WriteLine("      Hrac 2     ");
            Console.WriteLine("-----------------\n|  1 - Kamen	|\n|  2 - Nuzky	|\n|  3 - Papir	|\n-----------------");
            Console.WriteLine();
            Console.Write("Zadejte cislo: ");
            player2 = int.Parse(Console.ReadLine());
            if (player2 > 3 || player2 < 1)
            {
                continue;
            }
            Console.Clear();

            if (player1 == player2) { Console.WriteLine("Remiza"); }
            else
            {
                bool player1winner = player1Win(player1, player2);

                Console.WriteLine(player1winner ? "Vyhral hrac 1" : "Vyhral hrac 2");
            }



            playing = false;

            Console.WriteLine("Nová hra? (y)");
            if (Console.ReadLine() == "y")
            {
                playing = true;
            }
        }
    }

    static bool player1Win(int player1, int player2)
    {

        switch (player1)
        {
            case 1:
                if (player2 == 2)
                {
                    return true;
                }
                else
                {
                    return false;
                }
                break;

            case 2:
                if (player2 == 1)
                {
                    return false;
                }
                else
                {
                    return true;
                }
                break;

            case 3:
                if (player2 == 1)
                {
                    return true;
                }
                else
                {
                    return false;
                }
                break;
        }

        return true;
    }
}