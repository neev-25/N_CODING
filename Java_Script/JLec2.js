//opreators
// let a=3;
// let b=2;
// let c=4;
// let d=12;
// console.log("a = ",a," & b = ",b);
// console.log("a+b=",a+b);
// console.log("a-b=",a-b);
// console.log("a*b=",a*b);
// console.log("a/b=",a/b);
// console.log("a%b",a%b);
// console.log("a**b(a^b)=",a**b)
// console.log("a++ = a+1",a++);//first use after process
// console.log("b-- = b-1",b--);//first use after process
// console.log("++c = ",++c);//first process after use
// console.log("--d = ",--d);//first after use
//.......................................................................
//assigenment opreator
// let a=50;
// let b=2;
// let c=22;
// let d=12;
// console.log("a+=1",a+=1);
// console.log("a-=1",a-=1);
// console.log("a*=2",a*=2);
// console.log("a/=2",a/=2);
// console.log("a%=6",a%=6);
// console.log("a**=b",a**=b);
//.......................................................................
//relational opreators
// let a=5;
// let b=10;
// let c="5";
// console.log("a>b",a>b);
// console.log("a<b=",a<b);
// console.log("a==b",a==b);
// console.log("a!=b",a!=b);
// console.log("a>=b",a>=b);
// console.log("a<=b",a<=b);
// console.log("a===c",a===c);
// console.log("a!==c",a!==c);
//.......................................................................
//logical opreators
// let a=true;
// let b=false;
// console.log("a&&b",a&&b);
// console.log("a||b",a||b);
// console.log("a&&!(b)",a&&!(b));
// console.log("a||!(b)",a||!(b));
//.......................................................................
// let a=10;
// let b=20;
// let c=30;
// let d=40;
// console.log("a<b&&a>c",a<b&&a>c);
// console.log("a<b||a>c",a<b||a>c);
// console.log("!(a<b)",!(a<b));
// console.log("!(a>b)",!(a>b));
//.......................................................................
//conditional opreators
// let age=12;
// if(age>=18 && age<=60){
//     console.log("you are adult");
// }else
// {
//     console.log("you are child or old")
// }
//.....................
// let mode="light"
// if(mode=="light"){
//     console.log("light mode is on");
// }else
// {
//     console.log("dark mode is active");
// }
//...................
// let age=46;
// if(age<18)
// {
//     console.log("juniors");
// }
// else if(age>60)
// {
//     console.log("old");
// }
// else{
//     console.log("adult");
// }
//......................
// let age=12;
// let result =age>18? "adult" : "not adult";
// console.log(result);
//.......................................................................
//switch opreator
// const expr = 'Papayas';
// switch (expr) {
//   case 'Oranges':
//     console.log('Oranges are $0.59 a pound.');
//     break;
//   case 'Mangoes':
//   case 'Papayas':
//     console.log('Mangoes and papayas are $2.79 a pound.');
//     // Expected output: "Mangoes and papayas are $2.79 a pound."
//     break;
//   default:
//     console.log(`Sorry, we are out of ${expr}.`);
// }
//.......................................................................
// alert("hello");//this is only ask ok a=or not
// console.log(prompt("hello!"));//this is ask and need prompt and ok or not
//.......................................................................
// let mul=prompt("enter the nuumber : ");
// if(mul%5===0)
// {
//     console.log("number is multiple of 5");
// }else
// {
//     console.log("number is not multiple of 5");
// }
//.......................................................................
let mark=prompt("enter the marks : ");
if(mark>90 && mark<=100)
{
    console.log("A grade");
}else if(mark<=90 && mark>80)
{
    console.log("B grade");
}
else if(mark<=80 && mark>70)
{
console.log("C grade");
}
else if(mark<=70 && mark>60)
{
console.log("D grade");
}
else if(mark<=60 && mark>50)
{
console.log("E grade");
}
else
{
console.log("F grade");
}








