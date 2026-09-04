'use client'
import { useState } from 'react'
import { TitleText } from './CustomTexts'
import Skill from './Skill'
import { techSkills, softSkills } from '../../../utils/constants'

export default function Skills() {
    const [activeTab, setActiveTab] = useState("Tech");
    const [activeSkills, setActiveSkills] = useState("Tech");
    const activeBgColor = "text-fontSecondary"
    const setBg = (active: string) => (activeTab === active ? activeBgColor : "bg-transparent");

    return (
        <section id='Skills'>
            <div className="mt-8 px-8">
                <TitleText title='Skills' textStyle='text-center' />
                <div className='my-4'>

                    <div className='flex gap-4'>
                        {["Soft", "Tech"].map((tab) => (
                            <button
                                key={tab}
                                type='button'
                                className={`border-2 rounded-2xl px-1 py-2 w-1/2 md:w-1/5 text-center border-borderPrimary font-semibold text-2xl ${setBg(tab)}`}
                                onClick={() => {
                                    setActiveTab(tab)
                                    setActiveSkills(tab)
                                }}
                            >
                                {tab} Skills
                            </button>
                        ))}
                    </div>

                    {activeSkills === "Soft" ?
                        <div className="flex flex-wrap w-full my-8 gap-4 justify-around">
                            {softSkills.map((skill, index) => {
                                return (
                                    <Skill key={index} value={skill} />
                                )
                            })}
                        </div> :
                        <div className="flex flex-wrap w-full my-8 gap-4 justify-around">
                            {techSkills.map((skill, index) => {
                                return (
                                    <Skill key={index} value={skill} />
                                )
                            })}
                        </div>
                    }
                </div>
            </div>
        </section>
    )
}
