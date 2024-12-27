// let hero=["ironman","hulk","thor","captain america"];
// console.log(hero);
// console.log(hero.length);
// console.log(typeof(hero));//this is object
// console.log(hero[0]);//this is ironman
// console.log(hero[19]);//this is give me undefined
// hero[1]="spiderman";
// console.log(hero);//this is give me ..chnage array is mutable
// for(let i=0;i<hero.length;i++)
// {
//     console.log(hero[i]);//this is give me all element of array
// }
// for(let he of hero)
// {
//     console.log(he.toUpperCase());
// }
// let arr=[250,645,300,900,50];
// for(let i=0;i<arr.length;i++)
// {
//     arr[i]=arr[i]-arr[i]/10;
    
// }
// console.log(arr);
//............................................................
//methods: :: :
let item=["apple","banana","mango"];
console.log(item);
item.push("chips");
console.log(item);
item.push("panner");
console.log(item);
let val=item.pop();
console.log(val);
console.log(item);
console.log(item.toString());//chaging to the string
let marvel=["thor","ironman","spiderman"];
let dc=["batman","superman"];
let indian=["krish","shakiman"];
console.log(marvel.concat(dc,indian));//multiplelity
console.log(marvel);//only concat not chnage in original
let fname=["neev","manthan","jiyansh"];
fname.unshift("ayush");
console.log(fname);
fname.shift();
console.log(fname);
let narr=["neev","manthan","ayush","prince"];
console.log(narr.slice(1,3));
let arr=[1,2,3,2,23,53,5,2,5,775,34];
console.log(arr.splice(2,2,101,102));
console.log(arr);
let compinies=["bloomberg","microsoft","uber","amazon","google","netflix"];
compinies.shift(1);
console.log(compinies);
compinies.splice(2,1,"ola");
console.log(compinies);
compinies.push("nvidia");
console.log(compinies);








