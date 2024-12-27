// function myfunc(){
//     console.log("welcome to IIIT vadodara");
//     console.log("Now i completer my semester 1 at the iiit vadodara");
// }
// myfunc();
// function msg(msg)
// {
//     console.log(msg);
// }
// msg("welcome to IIIT vadodara");//if i not give arguments so this guve me undifined 
// function sumo(a,b)
// {
//     return a+b;
//     //console.log("after retur statemnts  :")/this is stamtments is not excute because this after the return 
// }//function's [prarmeters] like local variable of function and scope will be in block scope
// console.log(sumo(12.31,3332));
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//arrow functions
// function  sum(a,b)
// {
//     return a+b;
// }
// const arrowsum=(a,b)=>{
//     console.log(a+b);
// }
// arrowsum(2,1);
// const arrowmul=(a,b)=>{
//     return a*b;
// }
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// let cnt=0;
// function vow(a){
//     for(let i=0;i<a.length;i++)
//     {
//         if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
//         {
//             console.log(a[i]);
//             cnt++;
//         }
//     }
// }
// vow("hello world");
// console.log(cnt);
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//a callbackfuctions is a functions a passed as an argument to another functions
// let arr=[1,2,3,4,4,5];
// arr.forEach(function printVal(val){
//     console.log(val);
// });
// let strarr=["neev","manthan","ayush","jiyansh"];
// strarr.forEach((val)=>{
//     console.log(val.toLocaleUpperCase());
// });
// //higher order functions is basically what which function take other functiona as  aparameter.
// let sqrtarr=[1,2,3,4,5,6,7,8,9,10];
// sqrtarr.forEach(function printVal(val){
//     console.log(val**2);
// })
// let nums=[66,542,24];
// let calcsq=(num)=>{
//     console.log(num**2);
// }
// nums.forEach(calcsq);
// let newarr=nums.map((val)=>{
//     return val*2;
// });
// console.log(newarr);
// //map function is used to create a new array from an existing array
// let evearr=[1,2,3,4,5,6,7,8,,9];
// let evenarr=evearr.filter((val)=>{
//     return val%2==0;
// });
// console.log(evenarr);
// //filter function is used to create a new array with all elements that pass the test implemented by th
// let arr=[1,2,3,4,5];
// const output=arr.reduce((res,curr)=>{
//     return res+curr;//it work as res=res+curr it updated untill ot array not finshes..
// });
// console.log(output);
// let arr1=[1,324,13,3141,2342,3242];
// const output1=arr1.reduce((prev,curr)=>{
//     return prev>curr?prev:curr;
// });//find maximum numbers
// console.log(output1);
// let marks=[85,96,95,34,94,85,84,97,86,92,84,99,84,93];
// let topper=marks.filter((val)=>{
//     return val>90;
// });
// console.log(topper);
// let num=prompt("enter the number that you want to till num to print natural numbers ; ")
// let numarr=[];
// for(let i=1;i<=num;i++){
//     numarr.push(i);
// }
// console.log(numarr);

let fac=prompt("enter the number : ");
let arr=[];
for(let i=1;i<=fac;i++){
    arr.push(i);
}
let fact=arr.reduce((res,curr)=>{
    return res*curr;
});
console.log(fact);