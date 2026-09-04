// import Image from "next/image"
import Link from "next/link"


export default function About({ params }: { params: { products: string } }) {

    return (
        <>
            <h1>About</h1>
            <Link href={"/"}>Home</Link>
            {/* <Image src="/images/profile.jpg" alt="" width="100" height="100" /> */}
            <p>{`The product is ${params.products}`}</p>
        </>
    )
}
