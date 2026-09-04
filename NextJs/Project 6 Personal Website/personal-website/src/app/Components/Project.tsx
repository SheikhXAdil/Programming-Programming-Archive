import React from 'react'
import Image from 'next/image'
import { project } from '../../../utils/constants'
import Link from 'next/link'
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faArrowUpRightFromSquare } from '@fortawesome/free-solid-svg-icons'

export default function Project({ project }: { project: project }) {
    return (
        <div className='w-full lg:w-2/5 pb-4 border-2 border-borderPrimary bg-[#181730]'>
            <div className='flex flex-col'>
                <div className='aspect-video relative'>
                    <Image src={project.img} alt={project.title} fill className='object-fit' />
                </div>
                <div className='mt-6 w-4/5 mx-auto'>
                    <h4 className='text-2xl font-semibold mb-2'>{project.title}</h4>
                    <p className='text-lg'>{project.desc}</p>
                    <div className='flex flex-col mt-8'>
                        <Link target='_blank' href={project.siteLink} className='text-fontSecondary text-lg  active:outline-none cursor-pointer hover:text-linkHoverColor'>{project.siteText} <FontAwesomeIcon icon={faArrowUpRightFromSquare} className='h-3 w-3 inline' /></Link>
                        <Link target='_blank' href={project.gitRepoLink ? project.gitRepoLink : ""} className='text-fontSecondary active:outline-none text-lg cursor-pointer hover:text-linkHoverColor'>{project.gitRepoText ? project.gitRepoText : ""} <FontAwesomeIcon icon={faArrowUpRightFromSquare} className={`h-3 w-3 inline ${project.gitRepoText ? "" : "hidden"}`} /></Link>
                    </div>
                </div>
            </div>
        </div>
    )
}
