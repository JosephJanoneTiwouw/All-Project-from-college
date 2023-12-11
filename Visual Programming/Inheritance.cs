using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Robot robot1 = new Robot();
            robotBeroda robot2 = new robotBeroda();
            robotPenyelam robot3 = new robotPenyelam();
            robotBerkaki robot4 = new robotBerkaki();
            robotTerbang robot5 = new robotTerbang();

            Console.Write("Masukkan Nama Robot = ");
            robot1.nama = Console.ReadLine();

            Console.Write("Masukkan Nama Robot Berkaki = ");
            robot4.nama = Console.ReadLine();

            Console.Write("Masukkan Nama Robot Beroda = ");
            robot2.nama = Console.ReadLine();

            Console.Write("Masukkan Nama Robot Terbang = ");
            robot5.nama = Console.ReadLine();

            Console.Write("Masukkan Nama Robot Penyelam = ");
            robot3.nama = Console.ReadLine();

            robot1.Jenissensor = "Gyroscope";

            robot3.Jenissensor = "Sensor Tekanan";

            robot2.Jumlahroda = "4";

            robot4.Jumlahkaki = "2";

            robot5.Jumlahbaling = "1";
            Console.WriteLine("\n");

            robot1.Beraksi();

            robot4.Beraksi();

            robot2.Beraksi();

            robot5.Beraksi();

            robot3.Beraksi();

            robot1.Atursensor();

            robot3.Atursensor();

            Console.Read();
        }
    }
}

{
    internal class Robot
{
    public string nama;
    private string jenissensor;

    public string Jenissensor { get => jenissensor; set => jenissensor = value; }
    public virtual void Atursensor()
    {
        Console.WriteLine("Mengatur sensitifitas {0}", Jenissensor);
    }

    public virtual void Beraksi()
    {
        Console.WriteLine("Robot {0} beraksi", this.nama);
    }
}
}

{
    internal class robotBerkaki : Robot
{
    private string jumlahkaki;

    public string Jumlahkaki { get => jumlahkaki; set => jumlahkaki = value; }

    public override void Beraksi()
    {
        Console.WriteLine("Robot {0} berjalan 10 langkah", this.nama);
    }
}
}

{
    internal class robotBeroda : Robot
{
    private string jumlahroda;

    public string Jumlahroda { get => jumlahroda; set => jumlahroda = value; }

    public override void Beraksi()
    {
        Console.WriteLine("Robot {0} meluncur 1 meter", this.nama);
    }
}
}

{
    internal class robotPenyelam : Robot
{
    private string jumlahbaling;

    public string Jumlahbaling { get => jumlahbaling; set => jumlahbaling = value; }

    public override void Atursensor()
    {
        Console.WriteLine("Mengatur sensitifitas tekanan air pada {0}", Jenissensor);
    }
    public override void Beraksi()
    {
        Console.WriteLine("Robot {0} menyelam sedalam 2 meter", this.nama);
    }
}
}

{
    internal class robotTerbang : Robot
{
    private string jumlahbaling;

    public string Jumlahbaling { get => jumlahbaling; set => jumlahbaling = value; }

    public override void Beraksi()
    {
        Console.WriteLine("Robot {0} melayang di ketinggian 2 meter", this.nama);
    }
}
}