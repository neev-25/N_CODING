// const student={
//     name:"John",
//     age:20,
//     grade:90,
//     printmarks:function()
//     {
//         console.log("marks is = ",this.grade);
//     },
// };
//...............
// const employee={
//     sal:10000,
//     calctex(){
//         console.log("tex is = ",this.sal);
//     },
//     calctex2:function()//both syntex are valid 
//     {
//         console.log("tex is = ",this.sal);
//     }
// }
// const karanarjun={
//     salary:50000,
// calctex(){
//     console.log("tex is = ");
// },
// }
// karanarjun.__proto__=employee;//if object & prototype have same method,object method will be used 
//..........................
// class toyota{
//     start(){
//         console.log("start");
//     }
//     stop()
//     {
//         console.log("stop");
//     }
//     setbrand(brand)
//     {
//         this.brand=brand;//with(this)that brand is object 's properties other argument
//     }
// }
// let fortuner=new toyota();
// fortuner.setbrand("fortuner");
// let lexus=new toyota();
//..................................
// class toyota{
//     constructor(brand,milage){
//         console.log("creating new object : : : ");
//         this.brand=brand;
//         this.milage=milage;
//     }
//         start(){
//             console.log("start");
//         }
//         stop()
//         {
//             console.log("stop");
//         }
//         setbrand(brand)
//         {
//             this.brand=brand;//with(this)that brand is object 's properties other argument
//         }
//     }
//     let fortuner=new toyota();//first invoke the constructor
//     fortuner.setbrand("fortuner",10);
//     console.log(fortuner);
//     let lexus=new toyota();
//     lexus.setbrand("lexus",20);
//     console.log(lexus);
//......................................
// class parent{
//     hello()
//     {
//         console.log("hello");
//     }
// }
// class child extends parent{
// }
// let obj=new child;
//.....................................
// class person{
//     eat()
//     {
//         console.log("eat");
//     }
//     sleep()
//     {
//         console.log("sleep");
//     }
//     work()
//     {
//         console.log("noemal life");
//     }
// }
// class engineer extends person{
//     work()
//     {
//         console.log("solve problems,build something");
//     }
// }
// class docter extends person{
//     work()
//     {
//         console.log("treatiet passeint");
//     }
// }
// let neev=new engineer();//child work have priority is high
//......................................
// class person{
//     constructor()
//     {
//         this.species="homesapiens";
//     }
//         eat()
//         {
//             console.log("eat");
//         }
//     }
//     class engineer extends person{
//         constructor(branch){
//             super();
//             this.branch=branch;
//         }
//         work()
//         {
//             super.eat();
//             console.log("solve problems,build something");
//         }
//     }
//     let neev=new engineer();//child work have priority is high
//..........................................
// let data="information technology";
// class user{
//     constructor(name,email)
//     {
//         this.name=name;
//         this.email=email;
//     }
//     viewdata()
//     {
//         console.log("data=",data);
//     }
// }
// class admin extends user{
//     constructor(name,email)
//     {
//         super(name,email);
//     }
//     editdata()
//     {
//         data="exchaneg data with new value";
//     }
// }
// let student1=new user("neev","safbssfj@fjsk");
// let student2=new user("manthan","manthan jasoliya28@gmail.com");
// let admin1=new admin("admin","admin21@gmail.com");
//.................................................
//error handling 
// let a=5;
// let b=10;
// console.log("a = ",a);
// console.log("b =",b);
// console.log("a+b=",a+b);
// try{
//     console.log("a+b =",a+c);
// }catch(err)
// {
//     console.log(err);
// }
// console.log("a+b=",a+b);




