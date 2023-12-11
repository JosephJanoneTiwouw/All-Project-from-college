using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp5
{
    internal class Siswa
    {
        public string nama;
        public int umur;
        public char inisial;
        public double berat;
        public bool aktif;

        public void cetak(string NamaSiswa)
        {
            this.nama = NamaSiswa;
            Console.WriteLine("Nama adalah {0}", this.nama);
        }

        public void cetak(int Umur)
        {
            this.umur = Umur;
            Console.WriteLine("Umur {0} adalah {1} tahun", this.nama, this.umur);
        }
        public void cetak(double Berat)
        {
            this.berat = Berat;
            Console.WriteLine("Berat {0} adalah {1}", this.nama, this.berat);
        }

        public void cetak(char Inisial)
        {
            this.inisial = Inisial;
            Console.WriteLine("Inisial dari nama {0} adalah {1}", this.nama, this.inisial);
        }

        public void cetak(bool Aktif)
        {
            this.aktif = Aktif;
            Console.WriteLine("Apakah {0} seorang mahasiswa? = {1}", this.nama, this.aktif);
        }
    }
}