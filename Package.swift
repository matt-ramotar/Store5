// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "Store5",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "Store5",
            targets: ["Store5"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "Store5",
            path: "./Store5.xcframework"
        ),
    ]
)
