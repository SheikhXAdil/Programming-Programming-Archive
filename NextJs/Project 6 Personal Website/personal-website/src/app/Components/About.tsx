import { TitleText } from './CustomTexts'
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faMicrochip, faGlobe } from '@fortawesome/free-solid-svg-icons'




export default function About() {
    return (
        <section id='About'>
            <div className="my-12 px-8">
                <TitleText title='About Me' textStyle='text-center' />
                <div className='w-full mt-4 lg:mt-10 flex flex-col md:flex-row justify-between items-start gap-6'>
                    <p className='text-sm sm:text-base w-full lg:w-2/3 font-semibold mt-2 md:mt-0'>
                        <span><FontAwesomeIcon icon={faGlobe} className='w-4 h-4 group-hover:text-bgTertiary text-fontSecondary inline mb-1 mr-1' /></span> I&apos;m a full stack NextJs developer curious to learn more about emerging web development technologies. My goal is to create beautiful and functional websites that exceed your expectations. As a proficient Next.js developer, I also have knowledge of TypeScript, Reacts, SQL Databases such as PostgreSQL ORMs such as Drizzle, API development, Content Management Systems such as Sanity and Contentful, Payment Getaways such as Stripe and contemporary CSS technologies like Tailwind and Shadcn-UI. I can also seamlessly work with Large Language models and LangChain to integrate latest and advance AI technologies in your applications.

                    </p>
                    <p className='text-sm sm:text-base w-full lg:w-2/3 font-semibold mt-8 md:mt-0'>
                        <span><FontAwesomeIcon icon={faMicrochip} className='w-4 h-4 group-hover:text-bgTertiary text-fontSecondary inline mb-1 mr-1' /></span>I&apos;m not only a skilled engineer, but also a vital team member, with outstanding communication and team management skills. My dedication and attention to detail in project management are matched by my love for developing dynamic, responsive web apps. I can smoothly combine technical expertise and creative vision to produce high-quality web development projects because I have a great eye for design and a dedication to teamwork. I am a tech enthusiast with a keen interest in computers and programming. I love learning new technologies and solving problems. I&apos;m enrolled in a course on Gen AI, Web 3.0 and the Metaverse to get ready for the next generation of the internet, when artificial intelligence, decentralized technology and virtual worlds will have a stronger influence on how we communicate, work, and live online.
                    </p>
                </div>
            </div>
        </section>
    )
}
