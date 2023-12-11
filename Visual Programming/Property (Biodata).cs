using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Project_OOP
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Biodata saya = new Biodata();

            Console.WriteLine("Masukkan Nama : ");
            saya.nama = Console.ReadLine();
            Console.WriteLine("Masukkan Umur : ");
            saya.umur = Console.ReadLine();
            Console.WriteLine("Masukkan Alamat : ");
            saya.alamat = Console.ReadLine();
            Console.WriteLine("Masukkan Fakultas : ");
            saya.fakultas = Console.ReadLine();
            Console.WriteLine("Masukkan Semester : ");
            saya.semester = Console.ReadLine();
            Console.WriteLine("Masukkan Tinggi : ");
            saya.tinggi = Console.ReadLine();
            Console.WriteLine("Masukkan Berat : ");
            saya.berat = Console.ReadLine();
            Console.WriteLine("Masukkan Hobi : ");
            saya.hobi = Console.ReadLine();
            Console.WriteLine("Masukkan nomor telepon : ");
            saya.notelp = Console.ReadLine();
            Console.WriteLine("Masukkan Makanan Favorit : ");
            saya.makananfav = Console.ReadLine();
            Console.WriteLine("Masukkan Minuman Favorit : ");
            saya.minumanfav = Console.ReadLine();
            Console.WriteLine("Masukkan Bintang : ");
            saya.bintang = Console.ReadLine();
            Console.WriteLine("Masukkan Shio : ");
            saya.shio = Console.ReadLine();
            Console.WriteLine("Masukkan Cita-cita : ");
            saya.citacita = Console.ReadLine();
            Console.WriteLine("Masukkan Kemampuan : ");
            saya.kemampuan = Console.ReadLine();

            Console.WriteLine("\nBiodata : \n");

            Console.WriteLine("\nNama : {0}", saya.nama);
            Console.WriteLine("Umur : {0}", saya.umur);
            Console.WriteLine("Alamat : {0}", saya.alamat);
            Console.WriteLine("Fakultas : {0}", saya.fakultas);
            Console.WriteLine("Semester : {0}", saya.semester);
            Console.WriteLine("Tinggi : {0}", saya.tinggi);
            Console.WriteLine("Berat : {0}", saya.berat);
            Console.WriteLine("Hobi : {0}", saya.hobi);
            Console.WriteLine("Nomor Telepon : {0}", saya.notelp);
            Console.WriteLine("Makanan Favorit : {0}", saya.makananfav);
            Console.WriteLine("Minuman Favorit : {0}", saya.minumanfav);
            Console.WriteLine("Bintang : {0}", saya.bintang);
            Console.WriteLine("Shio : {0}", saya.shio);
            Console.WriteLine("Cita-cita : {0}", saya.citacita);
            Console.WriteLine("Kemampuan : {0}", saya.kemampuan);
            Console.Read();
        }
    }
}