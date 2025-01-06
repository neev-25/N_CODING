// console.log("one");
// console.log("two");
// console.log("three");//sync programming in thiis sequence wise program excution
//......................
// function hello()
// {
//     console.log("hello");
// }
// setTimeout(hello,2000)//timeout: 2000ms=2s
// console.log("three");
// console.log("four");//this is not depend on the setitme out three fous is print beforly
//......................
// function sum(a,b)
// {
//     console.log(a+b);
// }
// function mul(a,b)
// {
//     console.log(a*b);
// } 
// function calc(a,b,sumCallback)
// {
//     sumCallback(a,b);
// }
// calc(1,2,sum);//sum()is not vaild
// calc(1,6,mul);
//........................
//callback hell--->nesting concept
// function getdata(dataId,getnextdata)
// {
//     setTimeout(()=>{
//         console.log("data is",dataId);
//         getnextdata();
//     },2000);
// }
// getdata(1,()=>{
//     getdata(2,()=>{
//         getdata(3,()=>{
//             console.log("all data is fetched");
//         });
//     });
// });
//................................
// let promise=new Promise((resolve,reject)=>{
//     console.log("i am promise");
//     resolve("i am resolved");

// });
// let promise=new Promise((resolve,reject)=>{
//     console.log("i am promise");
//     reject("her some error get so ..");
// });
//..................................
// function getdata(dataId,getnextdata)
// {
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             console.log("data is",dataId);
//             resolve("sucess"); 
//             if(getnextdata)
//             {
//                 getnextdata();
//             }
//         },2000);
//     });
// }
//....................................
// const getpromise=()=>{
//     return new Promise((resolve,reject)=>{
//         console.log("i am promise");
//         resolve("sucess");
//         //reject("her some error get so ..");
//     });
// };
// let promise=getpromise();
// promise.then((res)=>{
//     console.log("promise fullfilled",res);
// });
// promise.catch((err)=>{
//     console.log("promise rejected",err);
// })
//.......................................
// function asyncfunc()
// {
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             console.log("some data1");
//             resolve("sucess");
//         },5000);
//     });
// }
// console.log("fetching data......");
// let p1=asyncfunc();
// p1.then((res)=>{
//     console.log("promise fullfilled",res);
// })
//.........................................
//prmoise chaining examples
// // function asyncfunc1()
// // {
// //     return new Promise((resolve,reject)=>{
// //         setTimeout(()=>{
// //             console.log("some data1");
// //             resolve("sucess");
// //         },5000);
// //     });
// // }
// // function asyncfunc2()
// // {
// //     return new Promise((resolve,reject)=>{
// //         setTimeout(()=>{
// //             console.log("some data1");
// //             resolve("sucess");
// //         },5000);
// //     });
// // }
// // console.log("fetching data1......");
// // let p1=asyncfunc1();
// // p1.then((res)=>{
// //     console.log("promise fullfilled",res);
// //     console.log("fetching data2......");
// //     let p2=asyncfunc2();
// //     p2.then((res)=>{
// //         console.log("promise fullfilled",res);
// //     });
// // });
// function getdata(dataId)
// {
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             console.log("data is",dataId);
//             resolve("sucess"); 
//         },2000);
//     });
// }
// // getdata(412).then((res)=>{
// //     console.log(res);
// //     getdata(3111).then((res)=>{
// //         console.log(res);
// //     }).then((res)=>{
// //         console.log(res);
// //     })
// // })
// getdata(10).then((res)=>{
//     return getdata(20);
// }).then((res)=>{
//     return getdata(30);
// }).then((res)=>{
//     console.log(res);
// })
//........................................
function getdata(dataId){
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            console.log("data is",dataId);
            resolve("sucess");
        },2000);
    })
}
async function getalldata()
{
    await getdata(1);
    await getdata(2);
    await getdata(3);
}