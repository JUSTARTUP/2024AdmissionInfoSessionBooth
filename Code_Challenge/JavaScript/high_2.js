/*
    난이도 : high2
    요구시간 : 1분
*/
function challenge (num) {
    if(num <= 0) {
        console.log('KDMHS')
    }
    if(num > 0) {
        console.log('JUST')
    }
    if(num >= 10) {
        console.log('Implude')
    }
    console.log('DIMI')
}

(function () {
    for(let term = -3; eval(Boolean(term)) == true; term ++) {
        challenge((15 - -1 * term) * 5)
        break
    }
    try {
        console.log(term)
    } catch(error) { challenge(0xf) }
})()