export const techSkills = [
    "Typescript",
    "HTML",
    "Tailwind CSS",
    "Shadcn UI",
    "NextJs",
    "ReactJs",
    "Drizzle ORM",
    "Cloudinary",
    "Sanity CMS",
    "Stripe",
    "SQL",
    "API Integration",
    "Python",
    "Gen AI",
    "LangChain"
]

export const softSkills = [
    "Communication",
    "Teamwork",
    "Leadership",
    "Problem-solving",
    "Time management",
    "Critical thinking",
    "Adaptability",
]

export type project = {
    title: string,
    gitRepoText?: string,
    gitRepoLink?: string,
    siteText: string,
    siteLink: string,
    img: string,
    desc: string
}

export const projects: project[] = [
    // Github repo is private
    // {
    //     title: "Full Stack E-commerce Website",
    //     gitRepoText: "Check out git repository",
    //     gitRepoLink: "https://github.com/SheikhXAdil/Online-Marketplace-Nextjs13",
    //     siteText: "View live site",
    //     siteLink: "https://mydinemart.vercel.app",
    //     img: "/dinemart.png",
    //     desc: "A Notes app built with NextJS 13, Tailwind CSS, Shadcn UI for frontend and Postgre SQL, Vercel Storage, Rest APIs and Drizzle ORM for backend"
    // },
    {
        title: "Full Stack Notes CRUD App",
        gitRepoText: "Check out git repository",
        gitRepoLink: "https://github.com/SheikhXAdil/notes-app-postgres",
        siteText: "View live site",
        siteLink: "https://notes-app-eta-beryl.vercel.app",
        img: "/notes-app.png",
        desc: "A Notes app built with NextJS 13, Tailwind CSS, Shadcn UI for frontend and Postgre SQL, Vercel Storage, Rest APIs and Drizzle ORM for backend"
    },
    {
        title: "Weather App",
        gitRepoText: "Check out git repository",
        gitRepoLink: "https://github.com/SheikhXAdil/WeatherApp-react-tailwind",
        siteText: "View live site",
        siteLink: "https://weather-app-react-tailwind-six.vercel.app",
        img: "/Weather-app.png",
        desc: "A weather app built with ReactJs and Tailwind CSS using openweatherapi"
    },
    {
        title: "Photo Album App",
        gitRepoText: "Check out git repository",
        gitRepoLink: "https://github.com/SheikhXAdil/Cloudinary-PhotoAlbum-App",
        siteText: "View live site",
        siteLink: "https://cloudinary-photo-album-app.vercel.app",
        img: "/photo-album-app.png",
        desc: "A Photo Album app built with NextJS 13, Tailwind CSS, Shadcn UI and Cloudinary"
    },
    {
        title: "TextUtils",
        gitRepoText: "Check out git repository",
        gitRepoLink: "https://github.com/SheikhXAdil/TextUtils-react",
        siteText: "View live site",
        siteLink: "https://text-utils-react-omega.vercel.app",
        img: "/TextUtils.png",
        desc: "A text manupilating app built with ReactJs and Bootstrap"
    },
    {
        title: "Metaversus",
        gitRepoText: "Check out git repository",
        gitRepoLink: "https://github.com/SheikhXAdil/metaversus-tailwind",
        siteText: "View live site",
        siteLink: "https://metaversus-tailwind.vercel.app",
        img: "/Metaversus.png",
        desc: "A Modern Metaverse Website home page built with NextJs 13, Tailwind CSS and Framer Motion"
    },
    {
        title: "Carts and Details",
        gitRepoText: "Check out git repository",
        gitRepoLink: "https://github.com/SheikhXAdil/Cart-and-Details-ChakraUI",
        siteText: "View live site",
        siteLink: "https://cart-and-details-chakra-ui.vercel.app",
        img: "/Carts-and-Details.png",
        desc: "A Modern Carts & Details page built with NextJs 13 and Chakra UI"
    },
]
