import './globals.css'
import Footer from "./Components/Footer";


export const metadata = {
  title: 'Muhammad Adil Nadeem',
  description: "Hi I'm a full stack NextJs developer. Welcome to my portfolio website created with NextJs 13 and Tailwind CSS",
}

export default function RootLayout({
  children,
}: {
  children: React.ReactNode
}) {


  return (
    <html lang="en">
      <body className={'dark bg-bgPrimary text-fontPrimary'}>
        <main className='container w-11/12 lg:w-2/3 mx-auto flex flex-col gap-4 md:gap-10 my-4 md:my-8'>
          {children}
        </main>
        <footer>
          <Footer />
        </footer>
      </body>
    </html>
  )
}
