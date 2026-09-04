import './App.css';
import Topbar from "./Components/Topbar";
import Currencies from './Components/Curruncies';
import React from "react";

function App() {

  const [searchString, setSearchString] = React.useState("");

  return (
    <div>
      <Topbar setSearchString={setSearchString} />
      <Currencies searchString={searchString} />
    </div>
  );
}

export default App;
