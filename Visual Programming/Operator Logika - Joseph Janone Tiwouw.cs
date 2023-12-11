using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Operator_Logika
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = 10, b = 5;
            int c = 0, d = 0, e = 0;
            double f = 0;
            bool Lkecil, Lbesar, LKsama, LBsama, Sama, Tsama;



            Console.Write("masukan Nilai a: 10\n");
            Console.Write("masukan Nilai b: 5\n");
           

            c = a + b;
            Console.WriteLine("hasil pertambahan a + b adalah {0} + {1} = {2}", a, b, c);

            d = a - b;
            Console.WriteLine("hasil pengurangan a - b adalah {0} - {1} = {2}", a, b, d);

            e = a * b;
            Console.WriteLine("hasil perkalian a * b adalah {0} x {1} = {2}", a, b, e);

            f = a / b;
            Console.WriteLine("hasil pembagian a / b adalah{0} / {1} = {2}", a, b, f);

            Lkecil = c < e;
            Lbesar = c > e;
            LKsama = d <= f;
            LBsama = d >= f;
            Sama = c == e;
            Tsama = d != f;

            Console.WriteLine("maka c < e adalah {0}", Lkecil);
            Console.WriteLine("maka c > e adalah {0}", Lbesar);
            Console.WriteLine("maka d <= f adalah {0}", LKsama);
            Console.WriteLine("maka d >= f adalah {0}", LBsama);
            Console.WriteLine("maka c == e adalah {0}", Sama);
            Console.WriteLine("maka d != f adalah {0}", Tsama);

            Console.ReadLine();

        }
    }
}

