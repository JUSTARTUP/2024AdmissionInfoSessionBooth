/*
    난이도 : 상
    요구시간 : 2분
*/
function challenge (str) {
    switch (str) {
        case 'str':
            console.log('You will join us.')
            break
        case 'just':
        case 'dimigo':
            console.log('DIMIGO')
            break
        case 'web_programming':
            console.log('2024')
        case 'e_business':
            console.log('KDMHS is best school.')
            break
        case 'digital_content':
            console.log('JUST')
            break
    }
}

(function () {
    const table = { just: 'dimigo', dimigo: 'web_programming', web_programming: 'e_business', digital_content: 'str', str: 'just' }
    let term = -1
    while (term) {
        switch (eval('true')) {
            case false:
                challenge(table['just'])
            case 'boolean':
                challenge(table['dimigo'])
                return
            case true:
                challenge(table['digital_content'])
            case 'true':
                challenge(table['web_programming'])
                return
        }
    }
    challenge(table['str'])
})()


