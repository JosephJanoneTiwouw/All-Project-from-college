// 1

function calculateAge(birthYear) {
    return 2019 - birthYear;
  }
  
  function yearUntilRetirement(object) {
    const age = calculateAge(object.year);
    const retirement = 60 - age;
  
    if (retirement > 0) {
      console.log(`${object.firstName} retires in ${retirement} years`);
    } else {
      console.log(`${object.firstName} is already retired.`);
    }
  }
  
  yearUntilRetirement({ year: 1987, firstName: "John" });
  

  
  //---------------------------------------------------------------------------
  
  // 2
  
   const addNumber = (a, b, c, d, e, f, g) => {
       const numbers = [a, b, c, d, e, f, g];
       let sum = 0;
      for(let i=0;i<numbers.length;i++){
               sum += numbers[i];
       }
       return sum;
   }
  
   console.log(addNumber(1,2,3,4,5,6,7));
  // NOTE: please use the map function
  

  
  //---------------------------------------------------------------------------
  
  // 3
  
   const phi = 3.14;
   const power = 2;
   let radius = 0;
  
   const calculateArea = obj => {
     return phi * (obj.radius ** obj.power);
      };
  
   radius = 21;
    const area21 = calculateArea({radius, power: 2 });
  
   radius = 7;
   const area7 = calculateArea({radius, power: 2 });
  
   console.log(`area with 21 radius: ${area21}, and area with 7 radius: ${area7}`);
  
  
  
  //---------------------------------------------------------------------------
  
  // 4
  
   const makeAjaxRequest = (url, method) => {
     if (!method) {
       method = "GET";
     }
     console.log(url, method);
   };
  
   makeAjaxRequest("www.google.com");
  
  
  
  //---------------------------------------------------------------------------
  
  // 5
  
 function warnaKesukaan(putih){
  return putih;
}

console.log(warnaKesukaan(putih)) // Output: "Warna kesukaan saya adalah putih"

  
  //---------------------------------------------------------------------------
  
  // 6
  
  // Buatlah dua buah variabel array dengan nama namaBuah1 dengan isi apel dan mangga, dan namaBuah2 dengan isi sirsak dan semangka
  // dan gabungkan isi kedua variabel array tersebut ke dalam variabel array dengan nama semuaNamaBuah.
  // tampilkan di console isi dari semuaNamaBuah
  // output semuaNamaBuah harus sama dengan ["apel", "mangga", "sirsak", "semangka"]
  
  array1.concat(array2)
Contoh:
let namaBuah1 = ["apel", "mangga"];
let namaBuah2 = ["sirsak", "semangka"];


let semuaNamaBuah = namaBuah1.concat(namaBuah2);

console.log(semuaNamaBuah); // Output: ["apel", "mangga", "sirsak", "semangka"]

  