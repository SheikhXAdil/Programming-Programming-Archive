import React from 'react'
import Image from 'next/image'
import { TypingText } from './CustomTexts'
import HeroButtons from './HeroButtons'
import Link from 'next/link'


export default function Hero() {
    const buttons = [
        {
            text: "Hire Me",
            link: "#Contact"
        },
        {
            text: "Download Resume",
            link: "/resume.pdf"
        }
    ]

    return (
        <section id='Home'>
            <div className='mt-12 lg:mt-20 flex flex-col lg:flex-row justify-evenly lg:justify-between'>
                <div className='md:basis-2/3 my-auto'>
                    <div className='pl-8 py-8'>
                        <p className='text-md lg:text-xl font-semibold'>Hi It&apos;s me</p>
                        <h1 className='text-3xl md:text-5xl lg:text-6xl mt-2 font-bold'>Muhammad Adil Nadeem</h1>
                    </div>
                    <div className='px-8'>
                        <h2 className='text-base sm:text-lg md:text-3xl font-bold'>And I&apos;m a <TypingText title='Full Stack NextJs Developer' textStyle='text-fontSecondary' /></h2>
                        <p className='w-full md:w-3/4 mt-4 text-sm md:text-base'>My goal is to create beautiful and functional websites that exceed your expectations. With a deep understanding of the latest technologies and trends, I can help you achieve your goals and stand out from the competition. Let&apos;s collaborate on your next project - contact me today to get started.</p>

                        <ul className='flex flex-wrap w-full mx-auto my-4 gap-4'>
                            <li ><Link href={buttons[0].link}><HeroButtons value={buttons[0].text} styles='cursor-pointer' /></Link></li>
                            <li ><a download href={buttons[1].link}><HeroButtons value={buttons[1].text} styles='cursor-pointer' /></a></li>
                        </ul>
                    </div>
                </div>
                <div className='lg:pl-0 mt-8 mx-auto basis-1/3'>
                    <div className=' bg-bgTertiary w-[170px] h-[170px] sm:w-[200px] sm:h-[200px] md:w-[300px] md:h-[300px] rounded-full overflow-hidden mt-8 shadow-borderSecondary shadow-[-10px_-10px_30px_4px_rgba(0,0,0,0.1),_10px_10px_30px_4px_rgba(236,153,75,0.15)] '>
                        <Image src={"/profile-bg.png"} alt='profile picture' width={500} height={500} />
                    </div>
                </div>
            </div>
        </section>
    )
}
