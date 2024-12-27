//loops for
// for(let i=0;i<5;i++)
// {
//     console.log("neev mendoara");
// }
//.......................................
// let sum=0;
// for (let i = 0; i < 5; i++) {
//     sum += i;
// }
// console.log("sum",sum);
//.......................................
// let sum=0;
// for (let i = 0; i < 5; i++) {
//     sum += i;
// }
// console.log("sum",sum);
// console.log("i is : ",i);//this is give me error because this is in block scope not a global scope
//........................................
// let i=0;
// while(i<10)
// {
//     console.log(i);
// i+=2;
// }
//........................................
// let i=0;
// do{
//     console.log("hello");
// }while(i<0);//do while loop one qualituy this is a one time run but after if condition satisfy so this excute otherwise not
//........................................
//for -of loops
// let str="neev mendpara";
// for (let char of str) {
//     console.log(char);//this itreator contain all characteers of strings 
//     // then print if if reapeating so this give 
//     // how many time repart and after taht charaters
// }
//.........................................
//for -in loops
// let obj = {
//     name: "neev",
//     age: 17,
//     "city": "surat",
//     "country": "india",
//     isPass:true,

// };
// for (let key in obj){
//     console.log(key, obj[key]);//this give key and value of object
// }
//..........................................
// let i=0;
// for(let i=0;i<100;i++)
// {
//     if(i%2==0)
//     {
//         console.log(i);
//     }
// }
//............................................
// let gamenum=74;
// let usernum=prompt("enter the game num : ");
// while(gamenum!=usernum)
// {
//     if(gamenum>usernum)
//     {
//         console.log("your number is low");
//     }
//     else
//     {
//         console.log("your number is high");
//     }
//     usernum=prompt("enter the game num : ");
// }
// if(gamenum==usernum)
// {
//     console.log("you win");
// }
//..............................................
// let str1="neev";
// let str2="mendpara";
// console.log(str1.length);
// console.log(str2.length);
// let str3=str1+str2;
// console.log(str3);
// console.log(str1[3]);
// console.log(str2[6]);//always strings or other start indecies start from 0 and go to size-1..
//..............................................
//template literals
// let specialstring=`this is a templeate literals`;
// console.log(specialstring);
// console.log(typeof(specialstring));//string also
// //this is use in like in i read in CWH that f"{}"string....remember!
// let obj={
//     name:" neev mendpara",
//     age:20
// }
// let ouput=`${obj.name}'s age is ${obj.age}`;
// console.log(ouput);
// let sum=`this sum of is ${1+2+3}`;
// console.log(sum);
// let sent="this is \n sentence divided."
// console.log(sent);
// console.log(sent.length)//\t and \n is escape char that length count as 1 not 2
//................................................
//string methods is : :: : 
// let str="NeEv MeNdPaRa";
// console.log(str.length);
// console.log(str.toUpperCase());
// console.log(str.toLowerCase());//this not func but method
// //this is create new stirng not change in original string
// let s="   this is empty in starting and ending    ";
// console.log(s.trim());//this is use to remove start and ending spacing not
// let str="abcdefghijklmnopqurstuvwxyz";
// console.log(str.slice(0,5));//here not included 5 but 0,1,2,3,4 is included
// console.log(str.slice(5,12));
// console.log(str.slice(14,23));
// let str1="ansh";
// let str2="mendpara";
// console.log(str1.concat(str2));
// console.log(str1+str2); //this is also use to concat two strings
//console.log("i am neev "+25072007) //this is also convert into string so note that..
// let str="hello";
// console.log(str.replace("h","y"));
// console.log(str.replace("hello","neev")); //this is replace whole string not just on
// console.log(str.replaceAll("l","a")); //this is replace char pachi bhlene repeat thai to pan all char replcace 
// let str4="i love artificial intelligence";
// console.log(str4.charAt(3));//stirng is immutable means not changeble this is not effect on the original stirng
//....................................................................
let a=prompt("enter yoru naem i will generate for you username : ");
let output=`@${a}${a.length}`;
console.log(output);














