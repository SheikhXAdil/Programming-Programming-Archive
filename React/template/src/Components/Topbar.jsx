function Topbar ({ setSearchString }) {

    return (
        <div className="topbar">
            <h2>Crypto App</h2>
            <input
                placeholder="Search Currencies"
                className="search-bar"
                onChange={function(e){
                    setSearchString(e.target.value);
                }}
            />
        </div>
    );

}

export default Topbar;