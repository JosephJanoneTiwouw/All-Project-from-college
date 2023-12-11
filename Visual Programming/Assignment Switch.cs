using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace practice6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string pilih;
            Int32 menu;
            Console.Write("Menu:\n1. Makanan\n2. Minuman\n3. Cemilan\n");
            Console.Write("Masukan pilihan anda: ");
            pilih = Console.ReadLine();
            menu = Convert.ToInt32(pilih);

            switch (menu)
            {
                case 1:
                    string pil1;
                    Int32 menumakanan;
                    Console.Write("Menu makanan\n");
                    Console.Write("1. Nasi Ayam\n2. Nasi Ikan\n3. Nasi Telur\n\n");
                    pil1 = Console.ReadLine();
                    menumakanan = Convert.ToInt32(pil1);
                    switch (menumakanan)
                    {
                        case 1:
                            Console.Write("Anda pesan Nasi Ayam");
                            break;
                        case 2:
                            Console.Write("Anda pesan Nasi Ikan");
                            break;
                        case 3:
                            Console.Write("Anda pesan Nasi Telur");
                            break;
                        default:
                            Console.Write("Pilihan anda tidak tersedia");
                            break;
                    }
                    break;
                case 2:
                    string pil2;
                    Int32 menuminuman;
                    Console.Write("Menu minuman\n");
                    Console.Write("1. Teh botol\n2. Kopi hitam\n3. Susu\n\n");
                    pil2 = Console.ReadLine();
                    menuminuman = Convert.ToInt32(pil2);
                    switch (menuminuman)
                    {
                        case 1:
                            Console.Write("Anda pesan Teh botol");
                            break;
                        case 2:
                            Console.Write("Anda pesan Kopi hitam");
                            break;
                        case 3:
                            Console.Write("Anda pesan Nasi Susu");
                            break;
                        default:
                            Console.Write("Pilihan anda tidak tersedia");
                            break;
                    }

                    break;
                case 3:
                    string pil3;
                    Int32 menucemilan;
                    Console.Write("Menu cemilan\n");
                    Console.Write("1. Keripik Kentang\n2. Cokelat\n3. Momogi\n\n");
                    pil3 = Console.ReadLine();
                    menucemilan = Convert.ToInt32(pil3);
                    switch (menucemilan) { 
                        case 1:
                            Console.Write("Anda pesan Keripik Kentang");
                            break;
                        case 2:
                            Console.Write("Anda pesan Cokelat");
                            break;
                        case 3:
                            Console.Write("Anda pesan Momogi");
                            break;
                        default:
                            Console.Write("Pilihan anda tidak tersedia");
                            break;
                    }
                    break;
                default:
                    Console.Write("Pilihan anda tidak tersedia");
                    break;
            }
        }
    }
}
