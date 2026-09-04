import currenciesList from "currencies.json";
import fetch, { Headers } from 'node-fetch';
import chalk from "chalk";
const mapedCurrencies = currenciesList.currencies.map((e) => {
    return `${e.name} = ${e.code}`;
});
const conversion = async (from, to, amount) => {
    let apiService = "fixer";
    let apikey = "RXBzjS8rCZrdhECj61hlcfxDFt9Qy0eq";
    let myHeaders = new Headers();
    myHeaders.append("apikey", apikey);
    let requestOptions = {
        method: 'GET',
        headers: myHeaders
    };
    let fetchResult;
    try {
        let response = await fetch(`https://api.apilayer.com/${apiService}/convert?to=${to}&from=${from}&amount=${amount}`, requestOptions);
        fetchResult = await JSON.parse(await response.text());
        // console.log(fetchResult)
        if (fetchResult) {
            console.clear();
            let { info: { rate }, result } = fetchResult;
            console.log(`Your amount ${chalk.yellow(amount)} was converted from ${chalk.yellow(from)} to ${chalk.yellow(to)} at the rate of ${chalk.yellow(rate)} \n`);
            console.log(`The final amount is ${chalk.green(Math.ceil(result))}`);
        }
    }
    catch (error) {
        console.log('error', error);
    }
};
export { mapedCurrencies, conversion };
