
function Currencies ({ searchString }) {

    // list is an array of object
    const list = [
        {name: "Bitcoin", price: 22000},
        {name: "Solana", price: 38},
        {name: "Ethereum", price: 1700}
    ]

    return (
        <table>
            <thead>
                <tr>
                    <th>
                        Name
                    </th>
                    <th>
                        Price
                    </th>
                </tr>
            </thead>
            <tbody>
                {
                    //javascript
                    list
                    .filter((element) => {
                        const index = element.name.indexOf(searchString);
                        if (index === -1) return false;
                        else return true;
                    })
                    .map(function(coin){
                        return (
                            <tr>
                                <td>
                                    {coin.name}
                                </td>
                                <td>
                                    $ {coin.price}
                                </td>
                            </tr>
                        )
                    })
                }
            </tbody>
        </table>
    );
}

export default Currencies;