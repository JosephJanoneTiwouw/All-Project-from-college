using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Siswa siswa1 = new Siswa();


            siswa1.cetak("Joseph Janone Tiwouw");
            siswa1.cetak('J');
            siswa1.cetak(20);
            siswa1.cetak(97.5);
            siswa1.cetak(true);

            Console.Read();
        }
    }
}
