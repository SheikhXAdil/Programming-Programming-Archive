// replace * in string with numbers and then see which is divisible by 3

let replaceTheHash = (str: string) => {
    let strArray: string[] = [...str];
    let resultArray: number[] = []
    for (let i = 0; i < strArray.length; i++) {
        if (str[i] === "*") {
            for (let j = 0; j < 10; j++) {
                strArray[i] = j.toString()
                let numberString: number = parseInt(strArray.join(""))
                if (numberString % 3 === 0) {
                    resultArray.push(numberString)
                }
            }
            // console.log(resultArray)
        }
    }
}
replaceTheHash("2*9")


// identity matrix check for 3x3 matrices

let unitMatrixCheck = (matrix: number[][]) => {
    for (let i = 0; i < matrix.length; i++) {
        for (let j = 0; j < matrix[i].length; j++) {
            if ((matrix[i][j] !== 0 && j !== i) || (matrix[i][j] !== 1 && j == i) || matrix[i].length > 3) {
                return false
            }
        }
    }
    return true
}
// console.log(unitMatrixCheck([[1,9,8],[9,1,2],[5,6,1]]))
// console.log(unitMatrixCheck([[1,0,0],[0,1,0],[0,0,1]]))


// Check if matrix is lower triangular matrix

let lowerTriangularMatrixCheck = (matrix: number[][]) => {
    for (let i = 0; i < matrix.length; i++) {
        for (let j = 0; j < matrix[i].length; j++) {
            if ((matrix[i][j] !== 0 && j > i) || matrix[i].length > 3) {
                return false
            }
        }
    }
    return true
}

// console.log(lowerTriangularMatrixCheck([[1, 0, 0],[2, 0, 0], [0, 3, 3]]));
// console.log(lowerTriangularMatrixCheck([[1, 0, 1],[2, 0, 0], [0, 3, 3]]));

// Given array follows a strictly increasing or decreasing order

let arrayStrictOrder = (arr: number[]) => {
    if (arr.length > 0) {
        for (let i = 0; i < arr.length; i++) {
            if (arr[i] - arr[i + 1] == -1 || arr[i] - arr[i + 1] == 1) {
                return true;
            }
            else {
                return false;
            }
        }
    }
    else {
        return false
    }
}

// console.log(arrayStrictOrder([1,2,3,4,5]))
// console.log(arrayStrictOrder([15,14,13,12,12,11]))
// console.log(arrayStrictOrder([8,5,3,8,7,6]))

// number to bit form and then reversing bit form and then again converting to number

let bitFormReversion = (num: number) => {
    num = Math.abs(num);
    let bitForm: string = "00000000" + num.toString(2)
    bitForm = bitForm.slice(-8).split("").reverse().join("")
    let reversedBitNum: number = parseInt(bitForm, 2)
    console.log(reversedBitNum);
}

bitFormReversion(14)
bitFormReversion(56)
bitFormReversion(234)

// check number of even integers in a number

let evenNumberCounter = (num: number): number => {
    let counter: number = 0
    let stringifiedNum: string[] = num.toString().split("")
    for (let i = 0; i < stringifiedNum.length; i++) {
        let e: number = parseInt(stringifiedNum[i])
        if (e % 2 === 0) {
            counter++
        }
    }
    return counter
}

// console.log(evenNumberCounter(346))
// console.log(evenNumberCounter(258))
// console.log(evenNumberCounter(20))


// change the characters (lower case) in a string where a turns into z, b turns into y, c turns into x etc

let alphabetReverser = (str: string): string => {
    let result: string[] = [];
    for (let i = 0; i < str.length; i++) {
        let char_order: number = str.charCodeAt(i) - 'a'.charCodeAt(0),
            change_char = 25 - char_order + 'a'.charCodeAt(0);
        result.push(String.fromCharCode(change_char));
    }
    return result.join("");
}

// console.log(alphabetReverser("abcde"))
// console.log(alphabetReverser("typescript"))


// remove letters apprearing more then once
let multipleLetterRemover = (str: string) => {
    let array: string[] = [...str]
    for (let i = 0; i < array.length; i++) {
        for (let j = i + 1; j <= array.length; j++)
            if (array[i] === array[j])
                array.splice(j, 1)
    }
    console.log(array.join(''));
}

// multipleLetterRemover("addill isss Noiceeee")
// multipleLetterRemover("noiicee")


// check if number contains same digits
let allSameDigits = (num:number) => {
    let numStr:string = num.toString()
    let arr:string[] = numStr.split("")
    let counter:number = 0
    for (let i = 0; i < arr.length; i++) {
        const e = arr[i];
        if (e !== arr[0]) {
            counter++
        }
    }
    return counter===0
}

// console.log(allSameDigits(44444))
// console.log(allSameDigits(443244241))

// find maximum integer such that 1+2+3+....+n < a

let maxInteger = (num:number) => {
    let temp:number = 0
    for (let n = 0; n < num; n++) {
        if (temp < num) {
            temp += n
        }
        else if (temp === num) {
            return n - 1
        } else {
            return n - 2
        }
    } 
}
// console.log(maxInteger(10))
// console.log(maxInteger(21))
// console.log(maxInteger(25))


// compute sum of cubes from 1 to n

let sumOfCubes = (n:number):number => {
    let result = (n*(n+1))/2
    result = Math.pow(result, 2)
    return result
}
// console.log(sumOfCubes(3))
// console.log(sumOfCubes(5))


// sum all digits in a string

let stringDigitsAddition = (str:string):number => {
    let result = 0 
    for (let i = 0; i < str.length; i++) {
        if (/[0-9]/.test(str[i])) {
            result += parseInt(str[i])
        }
    }
    return result
}
// console.log(stringDigitsAddition("hello345"))
// console.log(stringDigitsAddition("111noice3654"))


// Swapping two halfs of a array of numbers of even length

let evenLengthArraySwapper = (arr:number[]) => {
    let firstHalve = arr.slice(0, arr.length/2)
    let secondHalve = arr.slice(arr.length/2)
    
    return secondHalve.concat(firstHalve)
}
// console.log(evenLengthArraySwapper([1,2,3,4,5,6]))
// console.log(evenLengthArraySwapper([12,41,23,56,75,43,76,43]))


// chenging the case of every letter in a string

let letterCaseChanger = (str:string) => {
    let arr = str.split("")
    let regEx1 = new RegExp(/[a-z]/)
    let regEx2 = new RegExp(/[A-Z]/)
    for (let i = 0; i < arr.length; i++) {
        if (regEx1.test(arr[i])) {
            arr[i] = arr[i].toUpperCase()
        }
        else if (regEx2.test(arr[i])) {
            arr[i] = arr[i].toLowerCase()
        }
    }
    let result = arr.join("")
    return result
}
// console.log(letterCaseChanger("AwaKe"))
// console.log(letterCaseChanger("nOiCEe"))


// replace adjacent digits of a given number of even length

let adjacentDigitSwapper = (num:number) => {
    let arr:string[] = num.toString().split("")
    for (let i = 0; i < arr.length-1; i+=2) {
        [arr[i], arr[i +1]] = [arr[i +1], arr[i]];
    }

    return arr.join("")

}
// console.log(adjacentDigitSwapper(123456))
// console.log(adjacentDigitSwapper(432156))


// 150 exercises done
 