let userscore=0;
let compscore=0;
const choices=document.querySelectorAll(".choice");
const msg=document.querySelector("#msg");
const userscorepara=document.querySelector("#user-score");
const compscorepara=document.querySelector("#comp-score");


const showwinner=(userwin,userchoice,compchoice)=>{
    if(userwin)
    {
        userscore++;
        userscorepara.innerText=userscore;
        console.log("You win!");
        msg.innerText=`You Win! Your ${userchoice} beats ${compchoice}`;
        msg.style.backgroundColor="green";
    }
    else
    {
        compscore++;
        compscorepara.innerText=compscore;
        console.log("You Lose");
        msg.innerText=`You Lose Your ${userchoice} beats ${compchoice}`;
        msg.style.backgroundColor="red";
    }
}
const drawgame=()=>{
    console.log("Game was Draw.");
    msg.innerText="Game was Draw.";
    msg.style.backgroundColor="blue";

}
const genCompChoice=()=>{
    const options=["rock","paper","scissors"];
    const randidx=Math.floor(Math.random()*3);
    return options[randidx];
}
const playgame=(userchoice)=>{
    console.log("user-choice = ",userchoice);
    const compchoice=genCompChoice();
    console.log("comp-choice = ",compchoice);
    if(userchoice==compchoice)
    {
        drawgame();
    }else
    {
        let userwin=true;
        if(userchoice=='rock')
        {
            userwin=compchoice==="paper" ? false : true;
        }else if(userchoice==="paper")
        {
            userwin=compchoice==="scissors" ? false : true;
        }else
        {
            userwin=compchoice==="rock" ? false : true;
        }
        showwinner(userwin,userchoice,compchoice);
    }
}
choices.forEach((choice)=>{
    choice.addEventListener("click",()=>{
        console.log("choice was clicked");
        const userchoice=choice.getAttribute("id");
        playgame(userchoice);
    });
});

