import React from 'react'
import { TitleText } from './CustomTexts'
import { projects } from '../../../utils/constants'
import Project from './Project'


export default function Projects() {
    return (
        <section id='Projects'>
            <div className='mt-24 lg:mt-0 px-8'>
                <TitleText title='Projects' textStyle='text-center' />
                <div className=' w-full mx-auto my-4'>
                    <div className="flex flex-wrap w-full mx-auto my-8 gap-6 justify-between">
                        {projects.map((project, index) => {
                            return (
                                <Project project={project} key={index} />
                            )
                        })}
                    </div>
                </div>
            </div>
        </section>
    )
}
