'use client'
import React, { useRef } from 'react';
import emailjs from '@emailjs/browser';
import { TitleText } from './CustomTexts'
import { useState } from 'react'
import { ToastContainer, toast } from 'react-toastify';
import 'react-toastify/dist/ReactToastify.css';




export default function Contact() {
    const [activeGradient, setActiveGradient] = useState("skill-gradient");

    const notifySucces = () => toast.success('Thank You for your message. Check your email!', {
        position: "top-right",
        autoClose: 5000,
        hideProgressBar: false,
        closeOnClick: true,
        pauseOnHover: true,
        draggable: true,
        progress: undefined,
        theme: "dark",
    });
    const notifyError = () => toast.error('There wa an error. Please check your email. If problem persists contact on my Email', {
        position: "top-right",
        autoClose: 5000,
        hideProgressBar: false,
        closeOnClick: true,
        pauseOnHover: true,
        draggable: true,
        progress: undefined,
        theme: "dark",
    });

    // const form: HTMLFormElement = React.useRef<HTMLFormElement>(null);

    const sendEmail = (e: React.FormEvent<HTMLFormElement>) => {

        e.preventDefault();

        emailjs.sendForm('service_umvggca', 'template_ueztmol', e.currentTarget, 'aXnBJPrf5yyQapGha')
            .then((result) => {
                notifySucces()
                console.log(result)
            }, (error) => {
                notifyError()
                console.log(error)
            });
        e.currentTarget.reset()
    };

    function mouseEnter() {
        setActiveGradient('')
    }

    function mouseLeave() {
        setActiveGradient("skill-gradient")
    }


    return (
        <section>
            <div id='Contact' className='mt-24 lg:mt-0 px-8 flex flex-col w-full'>
                <TitleText title='Contact Me' textStyle='text-center' />
                <form onSubmit={sendEmail} className='w-2/3 mx-auto'>
                    <div className='flex flex-col md:w-2/3 w-full gap-6 my-4'>
                        <div className='flex flex-col gap-2'>
                            <label htmlFor="name" className='text-lg md:text-xl'>Enter your name:</label>
                            <input required type="text" name="user_name" className='md:w-4/5 w-full h-10 bg-bgSecondary border-2 border-borderSecondary focus:border-3 focus:outline-none p-2 font-light rounded-lg focus:text-base] text-lg text-[#fdfaed]' />
                        </div>
                        <div className='flex flex-col gap-2'>
                            <label htmlFor="name" className='text-lg md:text-xl'>Enter your email:</label>
                            <input required type="email" name="user_email" className='md:w-4/5 w-full h-10 bg-bgSecondary border-2 border-borderSecondary focus:border-3 focus:outline-none p-2 font-light rounded-lg focus:text-base] text-lg' />
                        </div>
                        <div className='flex flex-col gap-2'>
                            <label htmlFor="name" className='text-lg md:text-xl'>Enter your phone number:</label>
                            <input required type="tel" name="user_phone" className='md:w-4/5 w-full h-10 bg-bgSecondary border-2 border-borderSecondary focus:border-3 focus:outline-none p-2 font-light rounded-lg focus:text-base] text-lg' />
                        </div>
                    </div>
                    <div className='flex flex-col mt-8 gap-4'>
                        <label htmlFor="message" className='md:w-2/3 w-full text-lg md:text-xl'>Enter your message:</label>
                        <textarea required name="message" className='md:w-4/5 w-full h-auto min-h-[8rem] lg:min-h-[10rem] overflow-visible bg-bgSecondary border-2 border-borderSecondary focus:border-3 focus:outline-none p-2 font-light rounded-lg text-lg' />
                    </div>
                    <div onMouseEnter={mouseEnter} onMouseLeave={mouseLeave} className={`${activeGradient} flex items-center justify-center w-1/2 md:w-1/4 lg:w-2/12 my-8 mx-auto border-2 rounded-2xl border-borderPrimary hover:border-borderSecondary cursor-pointer`}>
                        <input type='submit' value="Send" className={`rounded-2xl text-center p-3 font-semibold text-lg cursor-pointer w-full`} />
                    </div>
                </form>
                <ToastContainer
                    position="top-right"
                    autoClose={5000}
                    hideProgressBar={false}
                    newestOnTop={false}
                    closeOnClick
                    rtl={false}
                    pauseOnFocusLoss
                    draggable
                    pauseOnHover
                    theme="dark"
                />
            </div>
        </section>
    )
}
