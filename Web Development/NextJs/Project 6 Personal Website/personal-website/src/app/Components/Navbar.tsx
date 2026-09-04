"use client"
import Image from "next/image"
import Link from "next/link";
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faXmark } from '@fortawesome/free-solid-svg-icons'
import { useState } from "react";

export default function Navbar() {
    let [hidden, setHidden] = useState(true)
    let [active, setActive] = useState(true)

    function handleNavbar() {
        setHidden(!hidden)
        setActive(!active)
    }
    const navs: string[] = ["Home", "About", "Skills", "Projects", "Contact"]

    return (
        <div className='fixed top-0 left-0 w-full mb-60 flex flex-col md:flex-row justify-between bg-bgPrimary z-20'>
            <div className="flex justify-between">
                <div className="mx-6 my-4">
                    <Link href="/" className="text-xl md:text-2xl font-bold focus:outline-none">Muhammad Adil Nadeem</Link>
                </div>
                <button className="px-2 md:px-6 block md:hidden active:outline-none focus:outline-none" onClick={handleNavbar}>
                    {active ? <Image src={"/menu.svg"} alt="menu" width={32} height={32} /> : <FontAwesomeIcon icon={faXmark} width={32} height={32} className="w-7 h-7 ml-5" />}
                </button>
            </div>

            <div id="navbar" className={`${hidden ? "hidden" : ""} md:m-6 bg-bgTertiary md:bg-bgPrimary md:my-0 md:block`}>
                <ul id="navbar" className='md:mx-0 list-none w-full md:w-auto text-center md:text-start flex flex-col md:flex-row md:justify-between md:gap-6'>
                    {navs.map((nav, index) => {
                        return (
                            <li key={index} className='py-4 md:my-0 p-3 text-lg md:rounded-2xl font-medium hover:bg-bgPrimary hover:text-fontSecondary cursor-pointer '>
                                <Link href={`#${nav}`} className="active:outline-none">{nav}</Link>
                            </li>
                        )
                    })}
                </ul>
            </div>
        </div>
    )
}
