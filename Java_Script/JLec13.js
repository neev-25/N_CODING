const URL="https://cat-fact.herokuapp.com/facts";
let para=document.querySelector("#fact");
let btn=document.querySelector("#btn");

const getfacts=async()=>{
    console.log("getting dataa....");
    let response=await fetch(URL);
    console.log(response);
    let data=await response.json();
    // console.log(data);
//console.log(data[0]);
//console.log(data[0].text);
para.innerText=data[i].text;
}

btn.addEventListener("click",getfacts);