import React from 'react'
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faGithub, faLinkedin, faTwitter, faWhatsapp } from '@fortawesome/free-brands-svg-icons'
import { faEnvelope } from '@fortawesome/free-solid-svg-icons'
import Link from 'next/link'

const socials = [
    {
        icon: faGithub,
        link: "https://github.com/SheikhXAdil"
    },
    {
        icon: faLinkedin,
        link: "https://www.linkedin.com/in/adil-nadeem-8b7061253"
    },
    {
        icon: faTwitter,
        link: "https://twitter.com/SheikhXAdil"
    },
    {
        icon: faEnvelope,
        link: "mailto:adilnadeemedu@gmail.com"
    },
    {
        icon: faWhatsapp,
        link: "https://api.whatsapp.com/send?phone=923215526659"
    },
]


export default function Socials() {

    return (
        <ul className='flex flex-col gap-2'>
            {socials.map((social, index) => {
                return (
                    <Link key={index} target="_blank" href={social.link}>
                        <li className='my-2 w-6 sm:w-8 h-6 sm:h-8 md:w-12 md:h-12 border-2 group border-borderSecondary hover:bg-borderSecondary  cursor-pointer rounded-full flex justify-center items-center'>
                            <FontAwesomeIcon icon={social.icon} className='w-3 sm:w-4 h-3 sm:h-4 md:w-6 md:h-6 group-hover:text-bgTertiary text-fontSecondary hover:bg-fontSecondary' />
                        </li>
                    </Link>
                )
            })}
        </ul>
    )
}
