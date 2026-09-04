import About from "./Components/About";
import BackToTop from "./Components/BackToTop";
import Contact from "./Components/Contact";
import Hero from "./Components/Hero";
import Navbar from "./Components/Navbar";
import Projects from "./Components/Projects";
import Skills from "./Components/Skills";
import Socials from "./Components/Socials";

export default function Home() {
  return (
    <>
      <Navbar />
      <Hero />
      <About />
      <Skills />
      <Projects />
      <Contact />
      <section className="fixed top-1/4 right-2 md:right-4">
        <Socials />
      </section>
      <section className="fixed bottom-4 right-4">
        <BackToTop />
      </section>
    </>
  )
}
