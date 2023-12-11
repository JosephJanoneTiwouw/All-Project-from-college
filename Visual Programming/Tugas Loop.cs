using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace practice7
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //string a;
            //Int32 n;

            //Console.Write("Masukkan jumlah data: ");
            //a = Console.ReadLine();
            //n = Convert.ToInt32(a);

            //for(int i = 0; i < n; i++)
            //{
            //    Console.Write("Data ke {0}\n", i + 1);
            //}
            //Console.Read();


            //int i = 0;
            //while(i <= n)
            //{
            //    Console.Write("Data ke {0}\n", i + 1);
            //    i++;
            //}
            //Console.Read();

            //int i = 1;
            //do
            //{
            //    Console.Write("Data ke {0}\n", i);
            //    i++;
            //} while (i <= n);
            //Console.Read();

            int j1 = 0, j2 = 1, j3, i, nomor;
            Console.Write("Masukkan jumlah data: ");
            nomor = int.Parse(Console.ReadLine());
            Console.Write(j1 + " " + j2 + " ");
            for (i = 2; i < nomor; ++i)
            {
                j3 = j1 + j2;
                Console.Write(j3 + " ");
                j1 = j2;
                j2 = j3;
            }
            Console.Read();
        }
    }
}

