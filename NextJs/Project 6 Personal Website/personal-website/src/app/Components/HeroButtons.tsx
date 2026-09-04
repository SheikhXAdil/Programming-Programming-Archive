'use client'

import { useState } from 'react'


export default function HeroButtons({ value, styles }: { value: string, styles?: string }) {
    const [activeGradient, setActiveGradient] = useState("skill-gradient");

    function mouseEnter() {
        console.log('mouse enter')
        setActiveGradient('')
    }

    function mouseLeave() {
        console.log('mouse leave')
        setActiveGradient("skill-gradient")
    }

    return (
        <div id={`${value}`} onMouseEnter={mouseEnter} onMouseLeave={mouseLeave} className={`${activeGradient} flex items-center justify-center w-full border-2 rounded-2xl border-[#555297] p-3 text-[#fdfaed] hover:border-[#EC994B] ${styles ? styles : ""}`}>
            <div className={`rounded-2xl text-center font-semibold text-base md:text-lg`}>
                {value}
            </div>
        </div>
    )
}
