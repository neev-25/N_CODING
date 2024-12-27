let h2=document.querySelector("h2");
console.dir(h2.innerText);
h2.innerText=h2.innerText+"from apna collage students";

let divs=document.querySelectorAll(".box");
console.log(divs);
divs[1].innerText="new value is added in the box";
divs[2].innerText="this is again value updated";
let idx=1;
for(div of divs)
{
    div.innerText=`new value is added${idx}`;
    idx++; 
}


