/*
    난이도 : mid1
    요구시간 : 2분
*/

const main = () => {
    const alpha = 'JUST'
    const bravo = 'DIMIGO'
    const charlie = 'SCHOOL'
    const delta = 'EXPERT'

    if(alpha[3] == charlie[2]) {
        console.log(alpha.split('S')[0], delta.split('R')[1])
    } else if(bravo[5] == charlie[4]) {
        console.log(bravo.split('O')[1], charlie.split('H')[0])
    } if(delta[5] == alpha[3]) {
        console.log(charlie.split('O')[1], alpha.split('J')[1])
    }
    return `${ alpha.split(charlie.split('C')[0][0])[0] }`
}

console.log(main())