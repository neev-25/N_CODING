let btn1=document.querySelector("#btn1");

// btn1.onclick=(evt)=>{
//     alert("Button 1 clicked");
//     let a=25;
//     a++;
//     console.log(a);
//     console.log(evt);
//     console.log(evt.type);
//     console.log(evt.target);
//     console.log(evt.clientX,evt.clientY);
// }
//if i define one function many time in js so here overwrite so last function will be excute so previous fnction excute nad not give me error
//when one activity wrtie in html program and also in havascript program so javascript program wil be  excuted priority highest 

// const handler=btn1.addEventListener("click",()=>{
//     console.log("neev mendpara");
// }); 
// btn1.removeEventListener("click",handler);

let modeBtn = document.querySelector("#mode");
let currMode = "light";

modeBtn.addEventListener("click", () => {
    console.log("You are trying to change mode");

    if (currMode === "light") {
        currMode = "dark";
        document.body.style.backgroundColor = "black";
    } else {
        currMode = "light";
        document.body.style.backgroundColor = "white";
    }    
});


